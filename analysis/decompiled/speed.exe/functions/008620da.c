/* speed.exe 008620da lineOpen; analysis pseudocode, not buildable source.
 */

LONG lineOpen(HLINEAPP hLineApp,DWORD dwDeviceID,LPHLINE lphLine,DWORD dwAPIVersion,
             DWORD dwExtVersion,DWORD_PTR dwCallbackInstance,DWORD dwPrivileges,DWORD dwMediaModes,
             LPLINECALLPARAMS lpCallParams)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x008620da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = lineOpen(hLineApp,dwDeviceID,lphLine,dwAPIVersion,dwExtVersion,dwCallbackInstance,
                   dwPrivileges,dwMediaModes,lpCallParams);
  return LVar1;
}

