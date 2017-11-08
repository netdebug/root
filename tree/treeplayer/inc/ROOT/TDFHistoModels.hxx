// Author: Enrico Guiraud, Danilo Piparo CERN  09/2017

/*************************************************************************
 * Copyright (C) 1995-2017, Rene Brun and Fons Rademakers.               *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

#ifndef ROOT_TDFHISTOMODELS
#define ROOT_TDFHISTOMODELS

#include <TString.h>
#include <memory>

class TH1D;
class TH2D;
class TH3D;
class TProfile;
class TProfile2D;

namespace ROOT {
namespace Experimental {
namespace TDF {

struct TH1DModel {
   TString fName;
   TString fTitle;
   int fNbinsX = 128;
   double fXLow = 0.;
   double fXUp = 64.;
   std::vector<double> fBinXEdges;

   TH1DModel() = default;
   TH1DModel(const TH1DModel &) = default;
   ~TH1DModel();
   TH1DModel(const ::TH1D &h);
   TH1DModel(const char *name, const char *title, int nbinsx, double xlow, double xup);
   TH1DModel(const char *name, const char *title, Int_t nbinsx, const float *xbins);
   TH1DModel(const char *name, const char *title, Int_t nbinsx, const double *xbins);
};

struct TH2DModel {
   TString fName;
   TString fTitle;
   int fNbinsX = 128;
   double fXLow = 0.;
   double fXUp = 64.;
   int fNbinsY = 128;
   double fYLow = 0.;
   double fYUp = 64.;
   std::vector<double> fBinXEdges;
   std::vector<double> fBinYEdges;

   TH2DModel() = default;
   TH2DModel(const TH2DModel &) = default;
   ~TH2DModel();
   TH2DModel(const ::TH2D &h);
   TH2DModel(const char *name, const char *title, int nbinsx, double xlow, double xup, int nbinsy, double ylow,
             double yup);
   TH2DModel(const char *name, const char *title, int nbinsx, const double *xbins, int nbinsy, double ylow,
             double yup);
   TH2DModel(const char *name, const char *title, int nbinsx, double xlow, double xup, int nbinsy,
             const double *ybins);
   TH2DModel(const char *name, const char *title, int nbinsx, const double *xbins, int nbinsy,
             const double *ybins);
   TH2DModel(const char *name, const char *title, int nbinsx, const float *xbins, int nbinsy,
             const float *ybins);
};

struct TH3DModel {
   TString fName;
   TString fTitle;
   int fNbinsX = 128;
   double fXLow = 0.;
   double fXUp = 64.;
   int fNbinsY = 128;
   double fYLow = 0.;
   double fYUp = 64.;
   int fNbinsZ = 128;
   double fZLow = 0.;
   double fZUp = 64.;
   std::vector<double> fBinXEdges;
   std::vector<double> fBinYEdges;
   std::vector<double> fBinZEdges;

   TH3DModel() = default;
   TH3DModel(const TH3DModel &) = default;
   ~TH3DModel();
   TH3DModel(const ::TH3D &h);
   TH3DModel(const char *name, const char *title, int nbinsx, double xlow, double xup, int nbinsy, double ylow,
             double yup, int nbinsz, double zlow, double zup);
   TH3DModel(const char *name, const char *title, int nbinsx, const float *xbins, int nbinsy, const float *ybins,
             int nbinsz, const float *zbins);
   TH3DModel(const char *name, const char *title, int nbinsx, const double *xbins, int nbinsy, const double *ybins,
             int nbinsz, const double *zbins);
};

struct TProfile1DModel {
   TString fName;
   TString fTitle;
   int fNbinsX = 128;
   double fXLow = 0.;
   double fXUp = 64.;
   double fYLow = 0.;
   double fYUp = 0.;
   TString fOption;
   std::vector<double> fBinXEdges;

   TProfile1DModel() = default;
   TProfile1DModel(const TProfile1DModel &) = default;
   ~TProfile1DModel();
   TProfile1DModel(const ::TProfile &h);
   TProfile1DModel(const char *name, const char *title, int nbinsx, double xlow, double xup, const char *option = "");
   TProfile1DModel(const char *name, const char *title, int nbinsx, double xlow, double xup, double ylow, double yup,
                   const char *option = "");
   TProfile1DModel(const char *name, const char *title, int nbinsx, const float *xbins, const char *option="");
   TProfile1DModel(const char *name, const char *title, int nbinsx, const double *xbins, const char *option="");
   TProfile1DModel(const char *name, const char *title, int nbinsx, const double *xbins, double ylow, double yup, const char *option="");
};

struct TProfile2DModel {
   TString fName;
   TString fTitle;
   int fNbinsX = 128;
   double fXLow = 0.;
   double fXUp = 64.;
   int fNbinsY = 128;
   double fYLow = 0.;
   double fYUp = 64.;
   double fZLow = 0.;
   double fZUp = 0.;
   TString fOption;
   std::vector<double> fBinXEdges;
   std::vector<double> fBinYEdges;

   TProfile2DModel() = default;
   TProfile2DModel(const TProfile2DModel &) = default;
   ~TProfile2DModel();
   TProfile2DModel(const ::TProfile2D &h);
   TProfile2DModel(const char *name, const char *title, int nbinsx, double xlow, double xup, int nbinsy, double ylow,
                   double yup, const char *option = "");
   TProfile2DModel(const char *name, const char *title, int nbinsx, double xlow, double xup, int nbinsy, double ylow,
                   double yup, double zlow, double zup, const char *option = "");
   TProfile2DModel(const char *name, const char *title, int nbinsx, const double *xbins, int nbinsy, double ylow, double yup, const char *option="");
   TProfile2DModel(const char *name, const char *title, int nbinsx, double xlow, double xup, int nbinsy, const double *ybins, const char *option="");
   TProfile2DModel(const char *name, const char *title, int nbinsx, const double *xbins, int nbinsy, const double *ybins, const char *option="");
};

} // ns TDF
} // ns Experimental
} // ns ROOT

#endif // ROOT_TDFHISTOMODELS
