/* speed.exe 008474e0 FUN_008474e0; analysis pseudocode, not buildable source.
 * calls 0083e360 FUN_0083e360
 * calls 0083e2e0 FUN_0083e2e0
 * calls 00852eb0 FUN_00852eb0
 * calls 00852e60 FUN_00852e60
 */

uint FUN_008474e0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  iVar1 = FUN_00852e60(*(undefined4 *)(param_1 + 0x8c8),param_2);
  if (iVar1 != 0) {
    iVar2 = FUN_0083e2e0(*(undefined4 *)(param_1 + 0x8cc),iVar1);
    uVar5 = *(uint *)(iVar2 + 0xf8) & param_3;
    uVar4 = *(uint *)(iVar2 + 0xf8) ^ uVar5;
    *(uint *)(iVar2 + 0xf8) = uVar4;
    if ((uVar4 & 0x1c0204) == 0) {
      FUN_00852eb0(*(undefined4 *)(param_1 + 0x8c8),param_2);
      uVar3 = FUN_0083e360(*(undefined4 *)(param_1 + 0x8cc),iVar1);
      if (*(code **)(param_1 + 0x8ec) != (code *)0x0) {
        (**(code **)(param_1 + 0x8ec))(param_1,uVar3,*(undefined4 *)(param_1 + 0x8f0));
      }
      (**(code **)(param_1 + 4))(uVar3);
    }
  }
  return uVar5;
}

