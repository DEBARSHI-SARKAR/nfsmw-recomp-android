/* speed.exe 007a0060 FUN_007a0060; analysis pseudocode, not buildable source.
 * calls 0078a310 FUN_0078a310
 * calls 0079ff50 FUN_0079ff50
 */

void FUN_007a0060(int param_1)

{
  int iVar1;
  undefined1 local_40c [1024];
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  DAT_009b4220 = param_1;
  if (0 < param_1) {
    local_40c[0] = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 1;
    iVar1 = 0xc;
    if (0xc < DAT_009b46d8) {
      iVar1 = DAT_009b46d8;
    }
    if (DAT_009b46dc < iVar1) {
      iVar1 = DAT_009b46dc;
    }
    FUN_0078a310(iVar1 - DAT_009b46d8,DAT_009b46d4);
    FUN_0078a310(param_1,0x20);
    FUN_0079ff50(0xc,local_40c,1);
  }
  return;
}

