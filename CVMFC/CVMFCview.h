// CVMFCView.h : interface of the CCVMFCView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CVMFCVIEW_H__67A3B83B_898A_4E6F_9C98_B0875F60CFF6__INCLUDED_)
#define AFX_CVMFCVIEW_H__67A3B83B_898A_4E6F_9C98_B0875F60CFF6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCVMFCView : public CScrollView
{
protected: // create from serialization only
	CCVMFCView();
	DECLARE_DYNCREATE(CCVMFCView)

// Attributes
public:
	CCVMFCDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCVMFCView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCVMFCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	IplImage* saveImg;
	IplImage* workImg;
 
	LPBITMAPINFO m_lpBmi;
 
	int     m_CaptFlag;
	int     m_dibFlag;
	int     m_SaveFlag;
 	int     m_ImageType;
 
// Generated message map functions
protected:
	//{{AFX_MSG(CCVMFCView)
 	afx_msg void OnUpdateRefresh(CCmdUI* pCmdUI);
	afx_msg void OnUpdateColorImageRefresh(CCmdUI* pCmdUI);
	afx_msg void OnUpdateCaptureImage(CCmdUI* pCmdUI);
	afx_msg void OnUpdateCapAbort(CCmdUI* pCmdUI);
 	afx_msg void OnUpdateFileSaveAs(CCmdUI* pCmdUI);
	afx_msg void OnUpdateFileClose(CCmdUI* pCmdUI);
 	afx_msg void OnUpdateStartCapture(CCmdUI* pCmdUI);
	afx_msg void OnUpdateOpenAviFile(CCmdUI* pCmdUI);
	afx_msg void OnUpdateViewContinue(CCmdUI* pCmdUI);
  	afx_msg void OnRefresh();
	afx_msg void OnColorImageRefresh();
	afx_msg void OnFileSaveAs();
 	afx_msg void OnStartCapture();
	afx_msg void OnCaptureImage();
	afx_msg void OnCapAbort();
	afx_msg void OnOpenAviFile();
	afx_msg void OnViewContinue();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnUpdateGaussSmooth(CCmdUI* pCmdUI);
	afx_msg void OnUpdateImageShrink(CCmdUI* pCmdUI);
	afx_msg void OnUpdateCannyBorddetec(CCmdUI* pCmdUI);
	afx_msg void OnGaussSmooth();
	afx_msg void OnImageShrink();
	afx_msg void OnCannyBorddetec();
	afx_msg void OnUpdateColorToGray(CCmdUI* pCmdUI);
	afx_msg void OnUpdateFlipV(CCmdUI* pCmdUI);
	afx_msg void OnUpdateFlipH(CCmdUI* pCmdUI);
	afx_msg void OnColorToGray();
	afx_msg void OnFlipV();
	afx_msg void OnFlipH();
	afx_msg void OnUpdateFlip(CCmdUI* pCmdUI);
	afx_msg void OnFlip();
	afx_msg void OnUpdateImageInvert(CCmdUI* pCmdUI);
	afx_msg void OnImageInvert();
	afx_msg void OnUpdateSobel(CCmdUI* pCmdUI);
	afx_msg void OnUpdateLaplace(CCmdUI* pCmdUI);
	afx_msg void OnSobel();
	afx_msg void OnLaplace();
	afx_msg void OnUpdateConservationImage(CCmdUI* pCmdUI);
	afx_msg void OnConservationImage();
	afx_msg void OnUpdateSetParameter(CCmdUI* pCmdUI);
	afx_msg void OnSetParameter();
	afx_msg void OnUpdateRadialGrads(CCmdUI* pCmdUI);
	afx_msg void OnRadialGrads();
	afx_msg void OnUpdateErosion(CCmdUI* pCmdUI);
	afx_msg void OnUpdateDilation(CCmdUI* pCmdUI);
	afx_msg void OnUpdateOpenning(CCmdUI* pCmdUI);
	afx_msg void OnUpdateClosing(CCmdUI* pCmdUI);
	afx_msg void OnUpdateGrads(CCmdUI* pCmdUI);
	afx_msg void OnUpdateGrayTophat(CCmdUI* pCmdUI);
	afx_msg void OnUpdateGrayBlackhat(CCmdUI* pCmdUI);
	afx_msg void OnErosion();
	afx_msg void OnDilation();
	afx_msg void OnOpenning();
	afx_msg void OnClosing();
	afx_msg void OnGrads();
	afx_msg void OnGrayTophat();
	afx_msg void OnGrayBlackhat();
	afx_msg void OnUpdateAdaptiveThreshold(CCmdUI* pCmdUI);
	afx_msg void OnAdaptiveThreshold();
	afx_msg void OnUpdateBasicGlobalThreshold(CCmdUI* pCmdUI);
	afx_msg void OnBasicGlobalThreshold();
	afx_msg void OnUpdateContourTrack(CCmdUI* pCmdUI);
	afx_msg void OnContourTrack();
	afx_msg void OnUpdateDistance(CCmdUI* pCmdUI);
	afx_msg void OnDistance();
	afx_msg void OnUpdateAverageImage(CCmdUI* pCmdUI);
	afx_msg void OnAverageImage();
	afx_msg void OnUpdateImageHistogram(CCmdUI* pCmdUI);
	afx_msg void OnImageHistogram();
	afx_msg void OnUpdateRotation30(CCmdUI* pCmdUI);
	afx_msg void OnRotation30();
	afx_msg void OnUpdateBlurSmooth(CCmdUI* pCmdUI);
	afx_msg void OnUpdateMedianSmooth(CCmdUI* pCmdUI);
	afx_msg void OnBlurSmooth();
	afx_msg void OnMedianSmooth();
	afx_msg void OnUpdateSnake(CCmdUI* pCmdUI);
	afx_msg void OnSnake();
	afx_msg void OnUpdateConvexHull(CCmdUI* pCmdUI);
	afx_msg void OnConvexHull();
	afx_msg void OnUpdateFitEllipse(CCmdUI* pCmdUI);
	afx_msg void OnFitEllipse();
	afx_msg void OnUpdateImageAdjust(CCmdUI* pCmdUI);
	afx_msg void OnUpdateHistEqualize(CCmdUI* pCmdUI);
	afx_msg void OnImageAdjust();
	afx_msg void OnHistEqualize();
	afx_msg void OnUpdateAreaConvexHull(CCmdUI* pCmdUI);
	afx_msg void OnAreaConvexHull();
	afx_msg void OnUpdateMinAreaRect(CCmdUI* pCmdUI);
	afx_msg void OnMinAreaRect();
	afx_msg void OnUpdateAreaRect(CCmdUI* pCmdUI);
	afx_msg void OnAreaRect();
	afx_msg void OnUpdateApproxPoly(CCmdUI* pCmdUI);
	afx_msg void OnApproxPoly();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnUpdateConvexityDefects(CCmdUI* pCmdUI);
	afx_msg void OnConvexityDefects();
	afx_msg void OnUpdateWatershed(CCmdUI* pCmdUI);
	afx_msg void OnWatershed();
	afx_msg void OnUpdateFloodFill(CCmdUI* pCmdUI);
	afx_msg void OnUpdatePyrSegmentation(CCmdUI* pCmdUI);
	afx_msg void OnFloodFill();
	afx_msg void OnPyrSegmentation();
	afx_msg void OnUpdateThresholding1(CCmdUI* pCmdUI);
	afx_msg void OnThresholding1();
	afx_msg void OnUpdateThresholding2(CCmdUI* pCmdUI);
	afx_msg void OnThresholding2();
	afx_msg void OnUpdateCornersTest(CCmdUI* pCmdUI);
	afx_msg void OnCornersTest();
	afx_msg void OnUpdateDynamicBorderTest(CCmdUI* pCmdUI);
	afx_msg void OnDynamicBorderTest();
	afx_msg void OnUpdateOpticalFlowTrack(CCmdUI* pCmdUI);
	afx_msg void OnOpticalFlowTrack();
	afx_msg void OnUpdateConvexHull2(CCmdUI* pCmdUI);
	afx_msg void OnConvexHull2();
	afx_msg void OnUpdateMotionDetect(CCmdUI* pCmdUI);
	afx_msg void OnMotionDetect();
	afx_msg void OnUpdateMinAreaRect2(CCmdUI* pCmdUI);
	afx_msg void OnMinAreaRect2();
	afx_msg void OnUpdateCamShiftDemo(CCmdUI* pCmdUI);
	afx_msg void OnCamShiftDemo();
	afx_msg void OnUpdateClusters(CCmdUI* pCmdUI);
	afx_msg void OnClusters();
	afx_msg void OnUpdateHoughLines(CCmdUI* pCmdUI);
	afx_msg void OnHoughLines();
	afx_msg void OnUpdateSquaresTest(CCmdUI* pCmdUI);
	afx_msg void OnSquaresTest();
	afx_msg void OnUpdateRotationTrack(CCmdUI* pCmdUI);
	afx_msg void OnRotationTrack();
	afx_msg void OnUpdateFaceDetect(CCmdUI* pCmdUI);
	afx_msg void OnFaceDetect();
	afx_msg void OnUpdateForegroundDetect(CCmdUI* pCmdUI);
	afx_msg void OnForegroundDetect();
	afx_msg void OnUpdateFaceDetect2(CCmdUI* pCmdUI);
	afx_msg void OnFaceDetect2();
	afx_msg void OnUpdateDrawing(CCmdUI* pCmdUI);
	afx_msg void OnUpdateDelaunay(CCmdUI* pCmdUI);
	afx_msg void OnDrawing();
	afx_msg void OnDelaunay();
	afx_msg void OnUpdateDft(CCmdUI* pCmdUI);
	afx_msg void OnDft();
	afx_msg void OnUpdateHoughCircle(CCmdUI* pCmdUI);
	afx_msg void OnHoughCircle();
	afx_msg void OnUpdateBlurSmoothC(CCmdUI* pCmdUI);
	afx_msg void OnUpdateGaussSmoothC(CCmdUI* pCmdUI);
	afx_msg void OnUpdateMedianSmoothC(CCmdUI* pCmdUI);
	afx_msg void OnUpdateSobelC(CCmdUI* pCmdUI);
	afx_msg void OnUpdateLaplaceC(CCmdUI* pCmdUI);
	afx_msg void OnBlurSmoothC();
	afx_msg void OnGaussSmoothC();
	afx_msg void OnMedianSmoothC();
	afx_msg void OnSobelC();
	afx_msg void OnLaplaceC();
	afx_msg void OnUpdateLogPolar(CCmdUI* pCmdUI);
	afx_msg void OnLogPolar();
	afx_msg void OnUpdateImageRgb(CCmdUI* pCmdUI);
	afx_msg void OnUpdateImageHsv(CCmdUI* pCmdUI);
	afx_msg void OnUpdateImageLab(CCmdUI* pCmdUI);
	afx_msg void OnImageRgb();
	afx_msg void OnImageHsv();
	afx_msg void OnImageLab();
	afx_msg void OnUpdateImageXyz(CCmdUI* pCmdUI);
	afx_msg void OnUpdateImageYcrcb(CCmdUI* pCmdUI);
	afx_msg void OnImageXyz();
	afx_msg void OnImageYcrcb();
	afx_msg void OnUpdateImageLuv(CCmdUI* pCmdUI);
	afx_msg void OnImageLuv();
	afx_msg void OnUpdateImageRgbC(CCmdUI* pCmdUI);
	afx_msg void OnImageRgbC();
	afx_msg void OnUpdate2dHistogram(CCmdUI* pCmdUI);
	afx_msg void On2dHistogram();
	afx_msg void OnUpdateSeqPartition(CCmdUI* pCmdUI);
	afx_msg void OnSeqPartition();
	afx_msg void OnUpdateWarpAffine(CCmdUI* pCmdUI);
	afx_msg void OnWarpAffine();
	afx_msg void OnUpdateWarpPerspect(CCmdUI* pCmdUI);
	afx_msg void OnWarpPerspect();
	afx_msg void OnUpdateFileOpen(CCmdUI* pCmdUI);
	afx_msg void OnUpdateAppExit(CCmdUI* pCmdUI);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CVMFCView.cpp
inline CCVMFCDoc* CCVMFCView::GetDocument()
   { return (CCVMFCDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CVMFCVIEW_H__67A3B83B_898A_4E6F_9C98_B0875F60CFF6__INCLUDED_)
