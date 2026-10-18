/* speed.exe 007862d0 FUN_007862d0; analysis pseudocode, not buildable source.
 * calls 00777d30 FUN_00777d30
 * calls 00785a00 FUN_00785a00
 */

void __thiscall
FUN_007862d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  
  iVar1 = FUN_00785a00(param_2,param_3,param_5,param_1 + 0x98,&param_5);
  if (iVar1 == -1) {
    *(undefined2 *)(param_1 + 0x8e) = 0;
    *(undefined1 *)(param_1 + 0x50) = 0;
    return;
  }
  FUN_00777d30(iVar1,param_5,param_2,param_3,param_4);
  return;
}

