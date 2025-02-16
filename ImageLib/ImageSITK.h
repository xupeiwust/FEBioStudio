/*
For more information, please see: http://software.sci.utah.edu

The MIT License

Copyright (c) 2021 University of Utah, The Trustees of Columbia University in
University of Utah.


Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation
the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.
*/

#include "3DImage.h"

#ifdef HAS_ITK

#include <SimpleITK.h>

class CImageSITK : public C3DImage
{
public:
    static itk::simple::Image SITKImageFrom3DImage(C3DImage* img);

public:
    CImageSITK();
    CImageSITK(int nx, int ny, int nz, int pixelType = CImage::UINT_8);
    ~CImageSITK();

    BOX GetBoundingBox() override;
    void SetBoundingBox(BOX& box) override;

    std::vector<unsigned int> GetSize();
    std::vector<double> GetOrigin();
    std::vector<double> GetSpacing();

    itk::simple::Image GetSItkImage();
    void SetItkImage(itk::simple::Image image);

private:
    void FinalizeImage();

private:
    itk::simple::Image m_sitkImage;
};

#endif