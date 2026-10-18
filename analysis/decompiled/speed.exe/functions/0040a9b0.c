/* speed.exe 0040a9b0 FUN_0040a9b0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0040a9b0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x140))();
  if (iVar1 != 0) {
    param_1[0x51] = *(int *)(*(int *)(iVar1 + 8) + 0x70);
    param_1[0x52] = *(int *)(*(int *)(iVar1 + 8) + 0x9c);
    param_1[0x41] = *(int *)(*(int *)(iVar1 + 8) + 0x90);
    param_1[0x53] = 0;
  }
  return;
}

