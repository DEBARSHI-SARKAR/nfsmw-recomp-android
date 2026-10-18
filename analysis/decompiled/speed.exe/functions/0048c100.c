/* speed.exe 0048c100 FUN_0048c100; analysis pseudocode, not buildable source.
 */

uint FUN_0048c100(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  *(undefined4 *)(param_3 + 0x8c) = 0;
  *(undefined4 *)(param_3 + 0x7c) = 0;
  *(undefined4 *)(param_3 + 0xac) = 0xc7c35000;
  *(undefined2 *)(param_3 + 0x9e) = 0;
  if (*(code **)(&DAT_00895408 +
                ((uint)*(ushort *)(param_1 + 0x9c) * 3 + (uint)*(ushort *)(param_2 + 0x9c)) * 4) ==
      (code *)0x0) {
    return param_3 & 0xffffff00;
  }
  uVar1 = (**(code **)(&DAT_00895408 +
                      ((uint)*(ushort *)(param_1 + 0x9c) * 3 + (uint)*(ushort *)(param_2 + 0x9c)) *
                      4))(param_1,param_2,param_3);
  return uVar1;
}

