/* speed.exe 0043a810 FUN_0043a810; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0042d3b0 FUN_0042d3b0
 * calls 0041c260 FUN_0041c260
 * calls 005d29d0 FUN_005d29d0
 * calls 0041ead0 FUN_0041ead0
 * calls 0042c890 FUN_0042c890
 */

void FUN_0043a810(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  float local_18;
  uint local_14;
  uint local_10;
  float local_c;
  undefined4 local_8;
  float local_4;
  
  piVar6 = (int *)*DAT_0090d740;
  local_10 = 0;
  local_14 = 0;
  if (piVar6 != DAT_0090d740) {
    do {
      piVar1 = (int *)piVar6[2];
      local_8 = DAT_008a2fb8;
      local_4 = DAT_008a2fbc;
      local_c = DAT_008a2fb4;
      local_18 = 0.0;
      cVar3 = (**(code **)(*piVar1 + 4))(&local_c,&local_18);
      if (cVar3 == '\0') {
        iVar4 = piVar1[1];
        if (iVar4 != 0) {
          FUN_0041ead0();
          FUN_0041ead0();
          FUN_005d0370(iVar4,0x6c,0);
          piVar1[1] = 0;
        }
      }
      else {
        iVar4 = piVar1[1];
        if (iVar4 == 0) {
          iVar4 = FUN_005d29d0(0x6c,0);
          if (iVar4 == 0) {
            piVar1[1] = 0;
          }
          else {
            FUN_0042c890(piVar1,&local_c,local_18);
            piVar1[1] = iVar4;
          }
        }
        else {
          *(float *)(iVar4 + 8) = local_c - local_18;
          *(float *)(iVar4 + 0x20) = local_c + local_18;
          *(float *)(iVar4 + 0x3c) = local_4 - local_18;
          *(float *)(iVar4 + 0x54) = local_4 + local_18;
          iVar4 = piVar1[1];
          if (*(int *)(iVar4 + 4) != iVar4 + 0x18) {
            local_10 = local_10 + 1;
          }
          if (*(int *)(iVar4 + 0x38) != iVar4 + 0x4c) {
            local_14 = local_14 + 1;
          }
        }
      }
      piVar2 = (int *)piVar1[3];
      piVar5 = (int *)*piVar2;
      *piVar2 = (int)piVar2;
      *(int *)(piVar1[3] + 4) = piVar1[3];
      piVar1[4] = 0;
      if (piVar5 != (int *)piVar1[3]) {
        do {
          piVar2 = (int *)*piVar5;
          FUN_005d0370(piVar5,0xc,0);
          piVar5 = piVar2;
        } while (piVar2 != (int *)piVar1[3]);
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != DAT_0090d740);
  }
  FUN_0041c260(DAT_0090d8f0);
  FUN_0041c260(DAT_0090d8f4);
  FUN_0042d3b0(local_10 < local_14,&LAB_0043a790,param_1);
  return;
}

