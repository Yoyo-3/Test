
// 实验8.2（2.2）View.cpp : C实验82（22）View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "实验8.2（2.2）.h"
#endif

#include "实验8.2（2.2）Doc.h"
#include "实验8.2（2.2）View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C实验82（22）View

IMPLEMENT_DYNCREATE(C实验82（22）View, CView)

BEGIN_MESSAGE_MAP(C实验82（22）View, CView)
	ON_COMMAND(ID_POPPUT, &C实验82（22）View::OnPopput)
END_MESSAGE_MAP()

// C实验82（22）View 构造/析构

C实验82（22）View::C实验82（22）View()
{
	// TODO: 在此处添加构造代码

}

C实验82（22）View::~C实验82（22）View()
{
}

BOOL C实验82（22）View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C实验82（22）View 绘制

void C实验82（22）View::OnDraw(CDC* /*pDC*/)
{
	C实验82（22）Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C实验82（22）View 诊断

#ifdef _DEBUG
void C实验82（22）View::AssertValid() const
{
	CView::AssertValid();
}

void C实验82（22）View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C实验82（22）Doc* C实验82（22）View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C实验82（22）Doc)));
	return (C实验82（22）Doc*)m_pDocument;
}
#endif //_DEBUG


// C实验82（22）View 消息处理程序


void C实验82（22）View::OnPopput()
{
	MyDlg dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		int a, b, c, d;
		a = dlg.x;
		b = dlg.y;
		c = dlg.r1;
		d = dlg.r2;
		CRect rect(a - c, b - d, a + c, b + d);
		GetDC()->Ellipse(rect);
	}
	// TODO: 在此添加命令处理程序代码
}
