% ActiveFEMM (C)2006 David Meeker, dmeeker@ieee.org

function hi_addblocklabel(x,y)
if (nargin==2)
	callfemm(['hi_addblocklabel(' , numc(x) , num(y) , ')' ]);
elseif (nargin==1)
	callfemm(['hi_addblocklabel(' , numc(x) , num(y) , ')' ]);
end

