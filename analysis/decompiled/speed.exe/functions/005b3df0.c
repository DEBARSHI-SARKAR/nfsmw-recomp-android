/* speed.exe 005b3df0 FUN_005b3df0; analysis pseudocode, not buildable source.
 * calls 005b0080 FUN_005b0080
 */

void FUN_005b3df0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_40 [64];
  
  if ((param_2 != (int *)0x0) && (*(short *)(param_1 + 0x20) != 0)) {
    cVar2 = (**(code **)(*param_2 + 0x2c))(*(short *)(param_1 + 0x20),local_40);
    if (cVar2 != '\0') {
      uStack_48 = 0;
      uStack_4c = 0;
      FUN_005b0080(&uStack_4c,local_40,*(int *)(param_1 + 0x2c) + 0x1c);
      *param_3 = uStack_4c;
      param_3[1] = uStack_48;
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  *param_3 = *(undefined4 *)(iVar1 + 0x1c);
  param_3[1] = *(undefined4 *)(iVar1 + 0x20);
  return;
}

