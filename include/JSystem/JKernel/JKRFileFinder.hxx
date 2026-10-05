#pragma once

#include <Dolphin/types.h>

class JKRArchive;

class JKRFileFinder {
public:
    const char *mFileName;
    s32 mFileIndex;
    u16 mFileID;
    u16 mFileTypeFlags;

    virtual ~JKRFileFinder();
    virtual bool findNextFile() = 0;

    bool mIsAvailable;
    bool mIsDir;
};

class JKRArcFinder : public JKRFileFinder {
public:
    JKRArcFinder(JKRArchive *, u32, u32);
    virtual ~JKRArcFinder() override;

    virtual bool findNextFile() override;

    JKRArchive *mArchive;  // _14
    u32 _18;
    u32 _1C;
    u32 _20;
};
