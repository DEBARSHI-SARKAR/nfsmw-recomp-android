/* speed.exe 007ed55e FUN_007ed55e; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ee44b FUN_007ee44b
 * calls 007ee3f3 FUN_007ee3f3
 * calls 007ecc96 FUN_007ecc96
 * calls EXTERNAL:0000004e SetEvent
 */

undefined4 FUN_007ed55e(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 4) = 1;
  SetEvent(*(HANDLE *)(param_1 + 0x78));
  iVar3 = *(int *)(param_1 + 8);
  while (iVar3 == 0) {
    FUN_007ec1bd();
    piVar1 = *(int **)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0xc) = 0;
    if ((piVar1 != (int *)0x0) &&
       ((int)(uint)*(byte *)((int)piVar1 + 0x12) <= *(int *)(param_1 + 0x7c))) {
      uVar2 = FUN_007ee44b();
      *(undefined4 *)(param_1 + 0xc) = uVar2;
    }
    FUN_007ec1c8();
    if (*(int *)(param_1 + 0xc) == 0) {
      FUN_007ecc96(param_1 + 0x44);
    }
    else {
      if ((char)piVar1[4] != '\x01') {
        (**(code **)(*piVar1 + 4))(param_1);
      }
      if (*(char *)((int)piVar1 + 0x11) != '\0') {
        FUN_007ec1bd();
        FUN_007ee3f3(piVar1);
        *(undefined4 *)(param_1 + 0xc) = 0;
        FUN_007ec1c8();
        if ((char)piVar1[4] == '\x01') {
          iVar3 = -1;
        }
        else {
          iVar3 = (int)*(char *)((int)piVar1 + 0x11);
        }
        (*(code *)piVar1[7])(piVar1[3],iVar3,piVar1[6]);
        SetEvent(*(HANDLE *)(param_1 + 0x78));
      }
    }
    iVar3 = *(int *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return 0;
}

