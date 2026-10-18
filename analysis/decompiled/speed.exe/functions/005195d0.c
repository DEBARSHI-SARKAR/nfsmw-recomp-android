/* speed.exe 005195d0 FUN_005195d0; analysis pseudocode, not buildable source.
 * calls 007f3c69 FUN_007f3c69
 * calls 00518410 FUN_00518410
 */

void __thiscall FUN_005195d0(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  if ((*(byte *)(param_2 + 0x1c) & 1) == 0) {
    iVar2 = *(int *)(param_2 + 0x10);
    if (iVar2 == -0x47583934) {
      puVar1 = (undefined1 *)(DAT_0091cb20 + 0x14);
      if (*(char *)(DAT_0091cb20 + 0x14) != '\0') {
        FUN_007f3c69(1);
        *puVar1 = 0;
        *(undefined1 *)(param_1 + 0x68) = 0;
        return;
      }
    }
    else {
      if (iVar2 == -0x47583933) {
        if (*(int *)(param_1 + 0x70) == 1) {
          FUN_00518410(1);
          *(undefined1 *)(param_1 + 0x68) = 0;
          return;
        }
        FUN_00518410(2);
        *(undefined1 *)(param_1 + 0x68) = 0;
        return;
      }
      if (iVar2 == -0x47583932) {
        FUN_00518410(3);
      }
    }
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  return;
}

