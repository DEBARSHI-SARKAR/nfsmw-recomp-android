/* speed.exe 00407080 FUN_00407080; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00407080(int param_1,float param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (((*(int *)(param_1 + 0x48) != 0) && (uVar2 = *(uint *)(param_1 + 0x4c), uVar2 != 0)) &&
     (*(int **)(param_1 + 0x50) != (int *)0x0)) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x50) + 0x1c))();
    if ((char)uVar2 != '\0') {
      if (*(char *)(param_1 + 0x54) != '\0') {
        param_2 = param_2 + *(float *)(param_1 + 0x58);
        *(float *)(param_1 + 0x58) = param_2;
        if (param_2 < _DAT_00890d44 == 0 && (param_2 == _DAT_00890d44) == 0) {
          return CONCAT31((int3)(CONCAT22((short)(uVar2 >> 0x10),
                                          (ushort)(param_2 < _DAT_00890d44) << 8 |
                                          (ushort)(NAN(param_2) || NAN(_DAT_00890d44)) << 10 |
                                          (ushort)(param_2 == _DAT_00890d44) << 0xe) >> 8),1);
        }
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 0x48) + 0x4c))();
      cVar1 = '\x01' - (iVar3 != 0);
      uVar2 = CONCAT31((int3)((uint)-iVar3 >> 8),cVar1);
      *(char *)(param_1 + 0x54) = cVar1;
    }
  }
  return uVar2 & 0xffffff00;
}

