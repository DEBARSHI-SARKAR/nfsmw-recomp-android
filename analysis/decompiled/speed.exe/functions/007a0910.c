/* speed.exe 007a0910 FUN_007a0910; analysis pseudocode, not buildable source.
 * calls 0078a310 FUN_0078a310
 * calls 0079feb0 FUN_0079feb0
 */

void FUN_007a0910(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 local_40c [1024];
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  local_40c[0] = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 1;
  iVar1 = 10;
  if (10 < DAT_009b46d8) {
    iVar1 = DAT_009b46d8;
  }
  if (DAT_009b46dc < iVar1) {
    iVar1 = DAT_009b46dc;
  }
  FUN_0078a310(iVar1 - DAT_009b46d8,DAT_009b46d4);
  FUN_0078a310(param_2,0x20);
  FUN_0078a310(param_3,1);
  FUN_0079feb0(param_1,10,local_40c,1);
  return;
}

