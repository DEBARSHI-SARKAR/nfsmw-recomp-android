/* speed.exe 007940f0 FUN_007940f0; analysis pseudocode, not buildable source.
 * calls 0078a310 FUN_0078a310
 * calls 007921d0 FUN_007921d0
 */

void FUN_007940f0(uint param_1)

{
  uint uVar1;
  undefined1 local_40c [1024];
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  local_40c[0] = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 1;
  uVar1 = param_1 & 0xff;
  if ((int)(param_1 & 0xff) < (int)DAT_009b46d8) {
    uVar1 = DAT_009b46d8;
  }
  if ((int)DAT_009b46dc < (int)uVar1) {
    uVar1 = DAT_009b46dc;
  }
  FUN_0078a310(uVar1 - DAT_009b46d8,DAT_009b46d4);
  FUN_007921d0(param_1,local_40c,1);
  return;
}

