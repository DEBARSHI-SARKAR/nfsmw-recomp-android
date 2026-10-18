/* speed.exe 004bcdc0 FUN_004bcdc0; analysis pseudocode, not buildable source.
 * calls 004b0320 FUN_004b0320
 * calls 004bccd0 FUN_004bccd0
 * calls 006269b0 FUN_006269b0
 * calls 004bcd50 FUN_004bcd50
 * calls 00454810 FUN_00454810
 * calls 004b02b0 FUN_004b02b0
 */

void __thiscall FUN_004bcdc0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_004b0320(param_2);
  FUN_004bccd0(param_2);
  FUN_004bcd50(param_2);
  if (*(int *)(param_1 + 0x84) != 0) {
    if ((*(char *)(*(int *)(param_1 + 0x18) + 0x68) == '\0') && (*(int *)(param_1 + 0x84) != 4)) {
      puVar1 = (undefined4 *)FUN_00454810(0x49fb8ce5,0);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)FUN_006269b0(4);
      }
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 100);
      uVar4 = *puVar1;
      uVar5 = 5;
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x28) + 0x44))(uVar3,uVar4,5);
      FUN_004b02b0((float)fVar2,uVar3,uVar4,uVar5);
      *(undefined4 *)(param_1 + 0x84) = 4;
      puVar1 = (undefined4 *)FUN_00454810(0x49fb8ce5,0);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)FUN_006269b0(4);
      }
      FUN_004b02b0(*(undefined4 *)(param_1 + 0x60),0,*puVar1,0);
    }
    if ((*(char *)(*(int *)(param_1 + 0x18) + 0x68) == '\0') && (*(int *)(param_1 + 0x84) != 4)) {
      *(undefined4 *)(param_1 + 0x84) = 4;
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 100);
      uVar5 = 0;
      uVar4 = 100;
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x28) + 0x44))(uVar3,100,0);
      FUN_004b02b0((float)fVar2,uVar3,uVar4,uVar5);
      FUN_004b02b0(*(undefined4 *)(param_1 + 0x60),0,100,0);
    }
    switch(*(undefined4 *)(param_1 + 0x84)) {
    case 1:
    case 3:
    case 4:
      if (*(char *)(param_1 + 0x48) != '\0') {
        *(undefined4 *)(param_1 + 0x84) = 0;
      }
      break;
    case 2:
      if (*(char *)(param_1 + 0x48) != '\0') {
        *(undefined4 *)(param_1 + 0x84) = 3;
        FUN_004b02b0(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(*(int *)(param_1 + 0x18) + 100)
                     ,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x90) + 8) + 4),0);
        FUN_004b02b0(*(undefined4 *)(param_1 + 0x60),0,
                     *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x90) + 8) + 4),0);
        return;
      }
    }
  }
  return;
}

