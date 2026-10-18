/* speed.exe 00543eb0 FUN_00543eb0; analysis pseudocode, not buildable source.
 * calls 00543cc0 FUN_00543cc0
 * calls 0056bc10 FUN_0056bc10
 * calls 00527790 FUN_00527790
 * calls 004647c0 FUN_004647c0
 */

void __fastcall FUN_00543eb0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_200 [512];
  
  if ((char)(DAT_0091cbac >> 8) < '\0') {
    iVar2 = 0x391a0aac;
  }
  else if ((DAT_0091cbac & 0x40000) == 0) {
    iVar2 = (-(uint)((DAT_0091cbac & 0x200000) != 0) & 0x9e544c3e) + 0x39b3ccba;
  }
  else {
    iVar2 = -0x4f50cc5b;
  }
  uVar1 = FUN_0056bc10(iVar2);
  FUN_00543cc0(0x39b3ccba,0x4000000);
  FUN_004647c0(local_200,uVar1,param_1 + 0x40,param_1 + 0x40);
  FUN_00527790(local_200);
  return;
}

