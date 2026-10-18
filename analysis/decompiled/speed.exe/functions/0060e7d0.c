/* speed.exe 0060e7d0 FUN_0060e7d0; analysis pseudocode, not buildable source.
 * calls 00613880 FUN_00613880
 * calls 00606c20 FUN_00606c20
 * calls 00606980 FUN_00606980
 * calls 00606af0 FUN_00606af0
 * calls 0060e5a0 FUN_0060e5a0
 * calls 00606b60 FUN_00606b60
 * calls 0060b780 FUN_0060b780
 */

int FUN_0060e7d0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  piVar3 = param_2;
  if (*param_2 != 6) {
    piVar3 = (int *)FUN_0060b780();
  }
  if (*(int *)(param_1 + 0x14) + 0x18 == *(int *)(param_1 + 0x24)) {
    if (0x1000 < *(ushort *)(param_1 + 0x2c)) {
                    /* WARNING: Subroutine does not return */
      FUN_00606980(param_1,5);
    }
    FUN_00606af0(param_1,(uint)*(ushort *)(param_1 + 0x2c) << 1);
    if (0x1000 < *(ushort *)(param_1 + 0x2c)) {
      FUN_00613880(param_1,"stack overflow");
    }
  }
  if (*(char *)(piVar3[1] + 6) == '\0') {
    iVar1 = *(int *)(piVar3[1] + 0xc);
    if (*(char *)(iVar1 + 0x46) != '\0') {
      FUN_0060e5a0();
    }
    if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 8) <= (int)((uint)*(byte *)(iVar1 + 0x47) * 8)
       ) {
      FUN_00606b60(param_1,(uint)*(byte *)(iVar1 + 0x47));
    }
    iVar2 = *(int *)(param_1 + 0x14);
    *(int **)(param_1 + 0x14) = (int *)(iVar2 + 0x18);
    *(int *)(iVar2 + 0x18) = (int)param_2 + ((*(int *)(param_1 + 0x1c) + 8) - iVar4);
    iVar4 = **(int **)(param_1 + 0x14);
    *(int *)(param_1 + 0xc) = iVar4;
    *(uint *)(iVar2 + 0x1c) = iVar4 + (uint)*(byte *)(iVar1 + 0x47) * 8;
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 8;
    if (*(uint *)(param_1 + 8) < *(uint *)(iVar2 + 0x1c)) {
      do {
        **(undefined4 **)(param_1 + 8) = 0;
        uVar5 = *(int *)(param_1 + 8) + 8;
        *(uint *)(param_1 + 8) = uVar5;
      } while (uVar5 < *(uint *)(iVar2 + 0x1c));
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 0x1c);
    return 0;
  }
  if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 8) < 0xa1) {
    FUN_00606b60(param_1,0x14);
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = (int *)(iVar1 + 0x18);
  *(int *)(iVar1 + 0x18) = (int)param_2 + ((*(int *)(param_1 + 0x1c) + 8) - iVar4);
  *(undefined4 *)(param_1 + 0xc) = **(undefined4 **)(param_1 + 0x14);
  *(int *)(iVar1 + 0x1c) = *(int *)(param_1 + 8) + 0xa0;
  *(undefined4 *)(iVar1 + 0x20) = 1;
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    FUN_00606c20(param_1,0,0xffffffff);
  }
  iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + -4) + 0xc))(param_1);
  return *(int *)(param_1 + 8) + iVar4 * -8;
}

