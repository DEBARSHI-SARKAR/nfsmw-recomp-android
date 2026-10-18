/* speed.exe 007f3d3f FUN_007f3d3f; analysis pseudocode, not buildable source.
 * calls 007f5fe3 FUN_007f5fe3
 */

undefined4 * __thiscall
FUN_007f3d3f(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4,
            undefined1 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  uVar1 = FUN_007f5fe3(param_2);
  puVar4 = param_1;
  for (uVar3 = (uVar1 & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  for (iVar2 = (uVar1 & 1) << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar4 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  param_1[0x11] = param_3;
  *(undefined1 *)(param_1 + 0x12) = param_4;
  *(undefined1 *)((int)param_1 + 0x49) = param_5;
  return param_1;
}

