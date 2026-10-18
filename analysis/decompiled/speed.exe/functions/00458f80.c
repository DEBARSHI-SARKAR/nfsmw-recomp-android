/* speed.exe 00458f80 FUN_00458f80; analysis pseudocode, not buildable source.
 * calls 004025a0 FUN_004025a0
 * calls 004589f0 FUN_004589f0
 */

void FUN_00458f80(char param_1,int param_2,char param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = *(int **)(param_4 + 0x10);
  if (param_1 == '\0') {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(param_2);
    }
    if (param_3 != '\0') {
      FUN_004025a0(param_2,*(undefined4 *)(param_4 + 8),"Attrib::attribute_data");
    }
  }
  else {
    if (piVar1 != (int *)0x0) {
      uVar4 = 0;
      if (*(short *)(param_2 + 2) != 0) {
        iVar3 = 8;
        if (*(short *)(param_2 + 2) == 0) {
          iVar2 = 0;
          goto LAB_00458fe6;
        }
        do {
          if (*(ushort *)(param_2 + 4) == 0) {
            iVar2 = *(int *)(((*(ushort *)(param_2 + 6) & 0x8000) >> 0xc) + iVar3 + param_2);
          }
          else {
            iVar2 = *(ushort *)(param_2 + 4) * uVar4 + 8 +
                    ((*(ushort *)(param_2 + 6) & 0x8000) >> 0xc) + param_2;
          }
LAB_00458fe6:
          (**(code **)(*piVar1 + 0xc))(iVar2);
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 4;
        } while (uVar4 < *(ushort *)(param_2 + 2));
      }
    }
    if (param_3 != '\0') {
      FUN_004589f0(param_2);
      return;
    }
  }
  return;
}

