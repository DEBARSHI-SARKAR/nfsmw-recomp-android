/* speed.exe 0084d3e0 FUN_0084d3e0; analysis pseudocode, not buildable source.
 * calls 008620da lineOpen
 * calls 008620e0 lineNegotiateAPIVersion
 */

void FUN_0084d3e0(LPHLINE param_1,DWORD_PTR param_2,DWORD param_3,DWORD param_4)

{
  LONG LVar1;
  DWORD unaff_ESI;
  HLINEAPP unaff_EDI;
  DWORD local_14;
  lineextensionid_tag local_10;
  
  local_14 = 0;
  LVar1 = lineNegotiateAPIVersion(unaff_EDI,unaff_ESI,0x10004,0x20002,&local_14,&local_10);
  if (LVar1 == 0) {
    lineOpen(unaff_EDI,unaff_ESI,param_1,local_14,0,param_2,param_3,param_4,(LPLINECALLPARAMS)0x0);
  }
  return;
}

