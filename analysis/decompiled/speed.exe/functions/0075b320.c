/* speed.exe 0075b320 FUN_0075b320; analysis pseudocode, not buildable source.
 * calls 00500b00 FUN_00500b00
 * calls 006616f0 FUN_006616f0
 * calls 00759ff0 FUN_00759ff0
 * calls 0065f740 FUN_0065f740
 * calls 0064abe0 FUN_0064abe0
 * calls 0065fd30 FUN_0065fd30
 * calls 0075bed0 FUN_0075bed0
 * calls 00507700 FUN_00507700
 */

void __thiscall FUN_0075b320(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    uVar2 = FUN_0065fd30(*(undefined4 *)(param_2 + 8),6,0,0,0);
    *(undefined4 *)(param_2 + 0x10) = uVar2;
    uVar2 = FUN_0065f740(*(undefined4 *)(param_2 + 8));
    iVar1 = FUN_00759ff0(uVar2,0,0);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = DAT_00904a00;
    }
    FUN_0064abe0(uVar3 & 0xf | 0x2000,*(undefined4 *)(param_2 + 8));
    *(undefined1 *)(param_2 + 0x16) = 1;
    *(undefined4 *)(param_1 + 0x14) = 1;
    FUN_006616f0(&LAB_0073aae0,param_2);
  }
  else {
    FUN_00759ff0(0x8000,0,1);
    *(undefined1 *)(param_2 + 0x16) = 1;
    *(undefined4 *)(param_1 + 0x14) = 1;
    FUN_00507700(*(undefined4 *)(param_2 + 8),&LAB_0073aac0,param_2,DAT_00904a00);
    iVar1 = FUN_00500b00(*(undefined4 *)(param_2 + 8));
    *(int *)(param_2 + 0xc) = iVar1;
    if (iVar1 == 0) {
      *(undefined1 *)(param_2 + 0x16) = 2;
      DAT_009b2c14 = 0;
      FUN_0075bed0();
      return;
    }
  }
  return;
}

