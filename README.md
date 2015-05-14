# UXKit
----------

UXKit path : `/System/Library/PrivateFrameworks/PhotoLibraryPrivate.framework/Versions/A/Frameworks/UXKit.framework`

Generate headers: `class-dump -H /System/Library/PrivateFrameworks/PhotoLibraryPrivate.framework/Versions/A/Frameworks/UXKit.framework -o ~/Desktop/UXKitHeaders`
(I used some headers of other github repos because were already fixes even if are from the beta)


To generate UIXCompatibility.h:
1. `cd DIRECTORY_OF_THE_HEADERS`
2. `ls UX*`
3. copy the output in UIXCompatibility.h
4. search (regex) `(UX(.*))` and replace with `@compatibility_alias UI$2 $1;`