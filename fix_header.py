#!/usr/bin/env python3
import re
import sys

OLD = "tomswb"
NEW_USER = "tschwab"
NEW_MAIL = "tschwab@student.42lausanne.ch"   # adjust to your campus domain
NEW_AUTHOR = f"{NEW_USER} <{NEW_MAIL}>"

def fit(new):
    # replace a match with `new`, padded to the same width so the header stays aligned
    def rep(m):
        width = len(m.group(0))
        if len(new) > width:
            sys.exit(f"'{new}' doesn't fit in a {width}-char field")
        return new.ljust(width)
    return rep

for path in sys.argv[1:]:
    with open(path) as f:
        lines = f.readlines()
    for i in range(min(11, len(lines))):          # header lines only
        line = lines[i]
        line = re.sub(r"(?<=By: )\S+ <[^>]*> *", fit(NEW_AUTHOR), line)  # By: line
        line = re.sub(rf"\b{OLD}\b *", fit(NEW_USER), line)        # created/updated by
        line = line.replace("########.fr", "########.ch")       # 42 logo
        lines[i] = line
    with open(path, "w") as f:
        f.writelines(lines)
    print("fixed", path)