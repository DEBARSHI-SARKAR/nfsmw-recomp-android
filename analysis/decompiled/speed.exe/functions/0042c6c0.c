/* speed.exe 0042c6c0 FUN_0042c6c0; analysis pseudocode, not buildable source.
 * calls 007658a0 FUN_007658a0
 * calls 0040fe20 FUN_0040fe20
 * calls 005d59f0 FUN_005d59f0
 * calls 007658f0 FUN_007658f0
 * calls 00770060 FUN_00770060
 * calls 007862d0 FUN_007862d0
 * calls 00788fa0 FUN_00788fa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0042c6c0(int param_1,undefined4 *param_2,float param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x48) = *param_2;
  *(undefined4 *)(param_1 + 0x4c) = param_2[1];
  *(undefined4 *)(param_1 + 0x50) = param_2[2];
  FUN_00770060();
  bVar2 = _DAT_00890cd4 <= param_3;
  *(undefined1 *)(param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x374) = 0;
  if (bVar2) {
    *(float *)(param_1 + 0x370) = param_3;
  }
  else {
    *(undefined4 *)(param_1 + 0x370) = 0x43480000;
  }
  if ((DAT_0092cd84 != 0) && (*DAT_0092cd7c != 0)) {
    piVar4 = (int *)FUN_005d59f0(&LAB_004039c0);
    if (piVar4 != (int *)0x0) {
      uVar5 = (**(code **)(*piVar4 + 0x98))();
      uVar6 = (**(code **)(*piVar4 + 4))();
      *(undefined4 *)(param_1 + 0xf0) = 3;
      FUN_007658a0(3);
      *(undefined4 *)(param_1 + 0xf8) = 0;
      FUN_007862d0(uVar6,uVar5,1,0x3f800000);
      if (*(char *)(param_1 + 200) != '\0') {
        cVar3 = FUN_00788fa0(param_1 + 0x48,0,0);
        if (cVar3 != '\0') {
          cVar3 = FUN_007658f0();
          if (cVar3 != '\0') {
            *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x110);
            *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x114);
            *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x118);
            puVar1 = (undefined4 *)(param_1 + 0x68);
            *puVar1 = *(undefined4 *)(param_1 + 0x134);
            *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x138);
            *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x13c);
            FUN_0040fe20(puVar1,puVar1);
            *(undefined4 *)(param_1 + 0x74) = 2;
            *(undefined4 *)(param_1 + 0x360) = 0x41a00000;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

