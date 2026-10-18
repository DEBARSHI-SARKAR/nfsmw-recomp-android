/* speed.exe 008620e0 lineNegotiateAPIVersion; analysis pseudocode, not buildable source.
 */

LONG lineNegotiateAPIVersion
               (HLINEAPP hLineApp,DWORD dwDeviceID,DWORD dwAPILowVersion,DWORD dwAPIHighVersion,
               LPDWORD lpdwAPIVersion,LPLINEEXTENSIONID lpExtensionID)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x008620e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = lineNegotiateAPIVersion
                    (hLineApp,dwDeviceID,dwAPILowVersion,dwAPIHighVersion,lpdwAPIVersion,
                     lpExtensionID);
  return LVar1;
}

