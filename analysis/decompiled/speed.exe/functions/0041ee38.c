/* speed.exe 0041ee38 FUN_0041ee38; analysis pseudocode, not buildable source.
 * calls 0065faf0 FUN_0065faf0
 * calls 005cc240 FUN_005cc240
 * calls 00405680 FUN_00405680
 * calls 005d59f0 FUN_005d59f0
 */

uint __fastcall FUN_0041ee38(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int unaff_EBX;
  undefined4 uVar8;
  
  piVar2 = (int *)(**(code **)(param_1 + 4))();
  if (piVar2 != (int *)0x0) {
    (**(code **)(*(int *)(unaff_EBX + 0x2c) + 8))(piVar2);
    piVar3 = (int *)FUN_005d59f0(&LAB_004040e0);
    if (piVar3 != (int *)0x0) {
      piVar4 = (int *)(**(code **)(*piVar3 + 0xac))();
      (**(code **)(*piVar4 + 0x8c))();
      uVar5 = FUN_005cc240("SoundAI");
      uVar8 = 4;
      uVar6 = (**(code **)(*piVar2 + 0x34))(4);
      iVar7 = FUN_00405680(uVar6,uVar8);
      *(undefined4 *)(iVar7 + 4) = uVar5;
      FUN_0065faf0();
      cVar1 = (**(code **)(*piVar3 + 0x5c))();
      return ~-(uint)(cVar1 != '\0') & (uint)piVar3;
    }
  }
  return 0;
}

