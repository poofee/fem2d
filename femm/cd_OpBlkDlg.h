// cd_OpBlkDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// cdCOpBlkDlg dialog

class cdCOpBlkDlg : public CDialog
{
// Construction
public:
	cdCOpBlkDlg(CWnd* pParent = NULL);   // standard constructor
	int cursel;
	int ProblemType;
	CArray<CMaterialProp,CMaterialProp&> *pblockproplist;
	CArray<CCircuit, CCircuit&> *pcircproplist;

// Dialog Data
	//{{AFX_DATA(cdCOpBlkDlg)
	enum { IDD = IDD_CD_OPBLKDLG };
	CButton	m_automesh;
	CComboBox	m_ackblk;
	BOOL	m_isexternal;
	double	m_sidelength;
	int		m_ingroup;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(cdCOpBlkDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(cdCOpBlkDlg)
	virtual void OnOK();
	virtual BOOL OnInitDialog();
	afx_msg void OnSelchangeAckblk();
	afx_msg void OnAutomeshcheck();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	CLuaEdit m_IDC_sidelength;
	CLuaEdit m_IDC_ingroup;
};