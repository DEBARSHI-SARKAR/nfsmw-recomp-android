/* speed.exe 0058c8b0 FUN_0058c8b0; analysis pseudocode, not buildable source.
 * calls 0058c760 FUN_0058c760
 * calls 004647c0 FUN_004647c0
 * calls 00747ac0 FUN_00747ac0
 * calls 00573140 FUN_00573140
 */

undefined4 FUN_0058c8b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  DAT_008f3c44 = 0;
  if (param_1 == 1) {
    iVar1 = FUN_0058c760(1,0x84);
    if (iVar1 != 0) {
      uVar3 = 0;
      uVar2 = FUN_00573140("HUDINDEX",0);
      DAT_008f3c44 = FUN_00747ac0(uVar2,uVar3);
    }
    FUN_004647c0(param_2,"GLOBAL\\HUDS_Custom_%2.2d.bin",DAT_008f3c44);
    return 1;
  }
  FUN_004647c0(param_2,&DAT_00890978);
  return 0;
}

