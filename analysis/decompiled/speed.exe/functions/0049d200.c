/* speed.exe 0049d200 FUN_0049d200; analysis pseudocode, not buildable source.
 */

void FUN_0049d200(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (((iVar1 != 0x16) && (iVar1 != 0x17)) && (iVar1 != 0x19)) {
    (**(code **)*param_1)(0);
    (**(code **)(*DAT_009117f4 + 0x20))(*(undefined2 *)(param_1 + 2),param_1);
  }
  return;
}

