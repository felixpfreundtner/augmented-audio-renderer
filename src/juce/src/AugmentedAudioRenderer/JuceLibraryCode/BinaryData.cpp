/* ==================================== JUCER_BINARY_RESOURCE ====================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

namespace BinaryData
{

//================== LICENSE ==================
static const unsigned char temp_binary_data_0[] =
"Copyright (c) 2015 Simon Zeni (simonzeni@gmail.com)\r\n"
"\r\n"
"\r\n"
"Permission is hereby granted, free of charge, to any person obtaining a copy\r\n"
"of this software and associated documentation files (the \"Software\"), to deal\r\n"
"in the Software without restriction, including without limitation the rights\r\n"
"to use, copy, modify, merge, publish, distribute, sublicense, and/or sell\r\n"
"copies of the Software, and to permit persons to whom the Software is\r\n"
"furnished to do so, subject to the following conditions:\r\n"
"\r\n"
"\r\n"
"The above copyright notice and this permission notice shall be included in\r\n"
"all copies or substantial portions of the Software.\r\n"
"\r\n"
"\r\n"
"THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\r\n"
"IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\r\n"
"FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE\r\n"
"AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\r\n"
"LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\r\n"
"OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN\r\n"
"THE SOFTWARE.\r\n"
"\r\n"
"\r\n";

const char* LICENSE = (const char*) temp_binary_data_0;


const char* getNamedResource (const char* resourceNameUTF8, int& numBytes)
{
    unsigned int hash = 0;

    if (resourceNameUTF8 != nullptr)
        while (*resourceNameUTF8 != 0)
            hash = 31 * hash + (unsigned int) *resourceNameUTF8++;

    switch (hash)
    {
        case 0x34bc1021:  numBytes = 1106; return LICENSE;
        default: break;
    }

    numBytes = 0;
    return nullptr;
}

const char* namedResourceList[] =
{
    "LICENSE"
};

const char* originalFilenames[] =
{
    "LICENSE"
};

const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8)
{
    for (unsigned int i = 0; i < (sizeof (namedResourceList) / sizeof (namedResourceList[0])); ++i)
    {
        if (namedResourceList[i] == resourceNameUTF8)
            return originalFilenames[i];
    }

    return nullptr;
}

}
