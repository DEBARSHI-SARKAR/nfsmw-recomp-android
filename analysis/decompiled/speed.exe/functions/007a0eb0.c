/* speed.exe 007a0eb0 FUN_007a0eb0; analysis pseudocode, not buildable source.
 * calls 0078a310 FUN_0078a310
 * calls 00736090 FUN_00736090
 * calls 0079feb0 FUN_0079feb0
 */

void FUN_007a0eb0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_40c [1024];
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  FUN_00736090(param_2);
  local_40c[0] = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 1;
  iVar1 = 0xe;
  if (0xe < DAT_009b46d8) {
    iVar1 = DAT_009b46d8;
  }
  if (DAT_009b46dc < iVar1) {
    iVar1 = DAT_009b46dc;
  }
  FUN_0078a310(iVar1 - DAT_009b46d8,DAT_009b46d4);
  FUN_0078a310(param_2,0x20);
  FUN_0079feb0(param_1,0xe,local_40c,1);
  return;
}

