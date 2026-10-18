/* speed.exe 00556150 FUN_00556150; analysis pseudocode, not buildable source.
 * calls 00793910 FUN_00793910
 * calls 00791600 FUN_00791600
 * calls 00555c50 FUN_00555c50
 * calls 0078bbe0 FUN_0078bbe0
 * calls 00791640 FUN_00791640
 * calls 0079bac0 FUN_0079bac0
 * calls 0078bcc0 FUN_0078bcc0
 * calls 0083a670 FUN_0083a670
 * calls 00791540 FUN_00791540
 * calls 00791690 FUN_00791690
 * calls 00539510 FUN_00539510
 * calls 00791500 FUN_00791500
 * calls 0083abc0 FUN_0083abc0
 * calls 0079ca30 FUN_0079ca30
 */

void __fastcall FUN_00556150(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x11a1) != '\0') {
    *(undefined1 *)(param_1 + 0x11a1) = 0;
    FUN_0079bac0();
    iVar1 = FUN_0078bcc0();
    if (iVar1 != 0) {
      iVar4 = iVar1 + 0x28;
      FUN_00793910(iVar4);
      FUN_00791540(iVar4);
      uVar2 = FUN_0083a670(iVar1 + 0x90,&DAT_0089dcd0,0);
      uVar2 = FUN_0083abc0(uVar2);
      FUN_00793910(uVar2);
      FUN_00791500(uVar2);
      uVar3 = (uint)*(byte *)(DAT_0091cf90 + 0x144);
      FUN_00793910(uVar3);
      FUN_00791600(uVar3);
      iVar1 = DAT_0091cf90 + 0x145;
      FUN_00793910(iVar1);
      FUN_00791640(iVar1);
      uVar3 = (uint)*(byte *)(DAT_0091cf90 + 0x173);
      FUN_00793910(uVar3);
      FUN_00791690(uVar3);
      FUN_00555c50();
      FUN_0079ca30();
      iVar1 = FUN_0078bbe0();
      if (iVar1 != 0) {
        FUN_00539510(param_1);
      }
    }
  }
  return;
}

