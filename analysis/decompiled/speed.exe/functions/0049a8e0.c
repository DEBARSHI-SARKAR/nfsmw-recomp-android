/* speed.exe 0049a8e0 FUN_0049a8e0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0049a8e0(int *param_1,undefined4 *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float unaff_EBX;
  float unaff_ESI;
  float *unaff_retaddr;
  float local_18;
  int local_14;
  int iStack_10;
  float fStack_c;
  int local_8;
  float local_4;
  
  local_18 = 0.0;
  iVar3 = FUN_007c4b80();
  local_4 = (float)param_2[1];
  local_14 = *param_2;
  local_8 = iVar3;
  if ((_DAT_00890968 < (float)param_2[2]) && ((float)param_2[2] < (float)iVar3)) {
    iVar3 = FUN_007c4b80();
    iVar3 = iVar3 + 1;
  }
  (**(code **)(*param_1 + 0x1c))(0,&local_18);
  local_4 = unaff_EBX - unaff_ESI;
  if (local_4 < _DAT_00890968) {
    local_4 = local_4 * _DAT_00890da8;
  }
  iStack_10 = 0;
  local_14 = 1;
  if (1 < iVar3) {
    do {
      iVar2 = local_14;
      local_18 = unaff_ESI;
      (**(code **)(*param_1 + 0x1c))((float)local_14,&stack0xffffffe0);
      if (((local_18 < unaff_EBX) && (unaff_EBX < unaff_ESI)) &&
         (fVar1 = unaff_ESI - local_18, _DAT_00890968 <= fStack_c * fVar1)) {
        if (fVar1 == _DAT_00890968) {
          *unaff_retaddr = (float)(iVar2 + -1) + _DAT_008933d4;
          return 1;
        }
        *unaff_retaddr = (unaff_EBX - local_18) / fVar1 + (float)(iVar2 + -1);
        return 1;
      }
      fVar1 = unaff_EBX - unaff_ESI;
      if (fVar1 < _DAT_00890968) {
        fVar1 = fVar1 * _DAT_00890da8;
      }
      if (fVar1 < local_4) {
        iStack_10 = iVar2;
        local_4 = fVar1;
      }
      local_14 = iVar2 + 1;
    } while (local_14 < iVar3);
  }
  *unaff_retaddr = (float)iStack_10;
  return 1;
}

