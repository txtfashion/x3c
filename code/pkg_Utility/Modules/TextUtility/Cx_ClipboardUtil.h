// Copyright 2008-2011 Zhang Yun Gui, rhcad@hotmail.com
// http://sourceforge.net/projects/x3c/
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef _X3_UTILITY_CLIPBOARDUTIL_H
#define _X3_UTILITY_CLIPBOARDUTIL_H

#include <Ix_ClipboardUtil.h>

class Cx_ClipboardUtil : public Ix_ClipboardUtil
{
public:
    Cx_ClipboardUtil() {}
    virtual ~Cx_ClipboardUtil() {}

public:
    // From Ix_ClipboardUtil
    virtual bool CopyText(HWND wndOwner, const std::wstring& text);
    virtual bool PasteText(HWND wndOwner, std::wstring& text, bool clear = false);
    virtual bool CanPasteText();
};

#endif // _X3_UTILITY_CLIPBOARDUTIL_H
