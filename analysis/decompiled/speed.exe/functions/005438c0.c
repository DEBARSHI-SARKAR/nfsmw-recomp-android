/* speed.exe 005438c0 FUN_005438c0; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 * calls 00460ca0 FUN_00460ca0
 * calls 00652ad0 _malloc
 */

undefined4 __thiscall
FUN_005438c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = _malloc(0x50);
  FUN_00460ca0(piVar2 + 2,param_2,0x1f);
  *(undefined1 *)((int)piVar2 + 0x27) = 0;
  FUN_00460c70(piVar2 + 10,param_3);
  piVar2[0x13] = param_4;
  piVar2[0x12] = param_5;
  puVar1 = *(undefined4 **)(param_1 + 0x80);
  *puVar1 = piVar2;
  *(int **)(param_1 + 0x80) = piVar2;
  *piVar2 = param_1 + 0x7c;
  piVar2[1] = (int)puVar1;
  return CONCAT31((int3)((uint)(param_1 + 0x7c) >> 8),1);
}

