/* speed.exe 00787420 FUN_00787420; analysis pseudocode, not buildable source.
 * calls 0077f970 FUN_0077f970
 * calls 0077fcf0 FUN_0077fcf0
 * calls 00772300 FUN_00772300
 * calls 0077fdf0 FUN_0077fdf0
 * calls 0077fab0 FUN_0077fab0
 */

undefined4 * __thiscall
FUN_00787420(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882334;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00772300();
  *param_1 = DAT_008a2fb4;
  param_1[1] = DAT_008a2fb8;
  param_1[2] = DAT_008a2fbc;
  param_1[3] = 0;
  param_1[4] = DAT_008a2fb4;
  param_1[5] = DAT_008a2fb8;
  param_1[6] = DAT_008a2fbc;
  param_1[7] = 0;
  param_1[8] = DAT_008a2fb4;
  param_1[9] = DAT_008a2fb8;
  param_1[10] = DAT_008a2fbc;
  param_1[0xb] = 0;
  param_1[0xc] = DAT_008a2fb4;
  param_1[0xd] = DAT_008a2fb8;
  param_1[0xe] = DAT_008a2fbc;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = param_2;
  param_1[0x25] = param_4;
  local_4 = 4;
  param_1[0x22] = param_3;
  if ((param_3 & 8) != 0) {
    FUN_0077fdf0(100);
    FUN_0077fcf0(8);
  }
  if ((param_3 & 4) != 0) {
    FUN_0077f970(0x19);
  }
  if ((param_3 & 0x10) != 0) {
    FUN_0077fab0(0x19);
  }
  ExceptionList = local_c;
  return param_1;
}

