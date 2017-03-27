
// VideoMFCDlg.h : 头文件
//

#pragma once
#include <opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "CvvImage.h"
#include "detetc_recog.h"
#include <conio.h>

// CVideoMFCDlg 对话框
class CVideoMFCDlg : public CDialogEx
{
// 构造
public:
	CVideoMFCDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_VIDEOMFC_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	IplImage* image;
	//	CvCapture* capture;
	afx_msg void OnBnClickedButton1();
private:
	//	void OnTimer(UINT nIDEvent);
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedButton2();
	afx_msg void OnClose();
	afx_msg void OnBnClickedButton3();
	//	CStatic m_showImage2;
	afx_msg void OnStnClickedShowimage();
	afx_msg void OnClickedButton1();
	afx_msg void OnClickedButton2();
	afx_msg void OnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnStnClickedNo3();
	afx_msg void OnStnClickedNo7();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnStnClickedStatic01();
};
