/* speed.exe 00848750 FUN_00848750; analysis pseudocode, not buildable source.
 * calls 008521b0 FUN_008521b0
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 * calls 00846d50 FUN_00846d50
 */

undefined4 FUN_00848750(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0083a670(param_2,&DAT_0089e2c4,0,0,&DAT_00890978);
  iVar2 = FUN_0083b210(uVar1);
  if (iVar2 < 0x100) {
    uVar1 = FUN_0083a670(param_2,&DAT_008c6ecc,0,0,&DAT_00890978);
    iVar2 = FUN_0083b210(uVar1);
    if (iVar2 < 1) {
      FUN_00846d50(param_3,param_4);
      FUN_008521b0(*(undefined4 *)(param_1 + 0xc),0x42524443,0,param_2,0xffffffff);
      return 0;
    }
  }
  return 0xfffffffd;
}

