/* speed.exe 007f8139 FUN_007f8139; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081e5ee FUN_0081e5ee
 * calls 0081cb91 FUN_0081cb91
 * calls 007f8286 FUN_007f8286
 * calls 0081ccaa FUN_0081ccaa
 * calls 0081bccb FUN_0081bccb
 */

int __fastcall FUN_007f8139(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_28 [4];
  int local_24;
  undefined1 local_18 [4];
  undefined4 local_14;
  int local_c;
  int local_8;
  
  iVar2 = param_1[0x17];
  FUN_007f8286();
  local_c = *(int *)(iVar2 + 8);
  iVar2 = local_c - param_1[0x13];
  if (param_1[0x15] != 0) {
    local_8 = iVar2;
    FUN_0081bccb();
    FUN_0081ccaa(*(undefined4 *)(*param_1 + 0xc),local_18);
    FUN_0081cb91(local_14,local_28);
    FUN_0081bcd9();
    iVar1 = FUN_0081e5ee();
    local_24 = local_24 - iVar1;
    if (param_1[0x14] < local_24) {
      param_1[0x14] = local_24;
      local_24 = ((param_1[0x16] - param_1[0x16] / 8) - local_8) + local_24;
      param_1[0x16] = local_24;
      iVar1 = -local_24;
      if (-local_24 < local_24) {
        iVar1 = local_24;
      }
      iVar2 = local_8;
      if (0x108 < iVar1) {
        param_1[0x16] = 0;
        param_1[0x13] = param_1[0x13] + local_24 / -8;
        iVar2 = local_c - param_1[0x13];
      }
    }
  }
  return iVar2;
}

