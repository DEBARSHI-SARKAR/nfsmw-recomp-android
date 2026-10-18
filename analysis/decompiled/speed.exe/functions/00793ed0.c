/* speed.exe 00793ed0 FUN_00793ed0; analysis pseudocode, not buildable source.
 * calls 0078a310 FUN_0078a310
 * calls 007921d0 FUN_007921d0
 */

void FUN_00793ed0(void)

{
  int iVar1;
  undefined1 local_40c [1024];
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  local_40c[0] = 0;
  local_c = 0;
  local_8 = 0;
  DAT_009b41fc = 4;
  local_4 = 1;
  iVar1 = 0xb;
  if (0xb < DAT_009b46d8) {
    iVar1 = DAT_009b46d8;
  }
  if (DAT_009b46dc < iVar1) {
    iVar1 = DAT_009b46dc;
  }
  FUN_0078a310(iVar1 - DAT_009b46d8,DAT_009b46d4);
  FUN_0078a310(4,0x20);
  FUN_007921d0(0xb,local_40c,1);
  return;
}

