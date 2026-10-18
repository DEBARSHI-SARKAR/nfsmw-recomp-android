/* speed.exe 008620f2 lineMakeCall; analysis pseudocode, not buildable source.
 */

LONG lineMakeCall(HLINE hLine,LPHCALL lphCall,LPCSTR lpszDestAddress,DWORD dwCountryCode,
                 LPLINECALLPARAMS lpCallParams)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x008620f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = lineMakeCall(hLine,lphCall,lpszDestAddress,dwCountryCode,lpCallParams);
  return LVar1;
}

