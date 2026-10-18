/* speed.exe 005f8080 FUN_005f8080; analysis pseudocode, not buildable source.
 * calls 005ede20 FUN_005ede20
 * calls 005eef00 FUN_005eef00
 * calls 005f4ad0 FUN_005f4ad0
 * calls 005ef640 FUN_005ef640
 * calls 005f2f60 FUN_005f2f60
 * calls 00457440 FUN_00457440
 * calls 00461360 FUN_00461360
 * calls 005f7390 FUN_005f7390
 * calls 00460c70 FUN_00460c70
 * calls 00460bf0 FUN_00460bf0
 * calls 005f65f0 FUN_005f65f0
 * calls 005f4bf0 FUN_005f4bf0
 * calls 00650350 FUN_00650350
 * calls 005f4e50 FUN_005f4e50
 * calls 00465a70 FUN_00465a70
 * calls 004655f0 FUN_004655f0
 * calls 005e3d80 FUN_005e3d80
 * calls 00652ad0 _malloc
 * calls 00650300 FUN_00650300
 * calls 00727240 FUN_00727240
 * calls 0065f860 FUN_0065f860
 * calls 00453fd0 FUN_00453fd0
 * calls 005e3e60 FUN_005e3e60
 */

void __fastcall FUN_005f8080(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  undefined1 local_80 [128];
  
  FUN_00460c70(local_80,*(undefined4 *)(param_1 + 0x18));
  uVar1 = FUN_00461360(local_80,&DAT_008a3ae8,&DAT_008a3af0);
  FUN_00460c70(uVar1);
  iVar2 = FUN_0065f860(local_80,0,0);
  FUN_00650300(iVar2);
  uVar1 = FUN_00465a70(*(undefined4 *)(iVar2 + 8),0x1040);
  FUN_00650350(iVar2,uVar1);
  FUN_004655f0(iVar2);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  iVar2 = FUN_00453fd0();
  uVar1 = FUN_00465a70(iVar2 << 0xe,0x40);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  FUN_00457440(uVar1,iVar2 << 0xe);
  FUN_005e3d80(*(undefined4 *)(param_1 + 0x2c));
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  FUN_005e3e60("gpcore");
  FUN_005f65f0(uVar1);
  FUN_005f7390(*(undefined4 *)(param_1 + 0x2c));
  FUN_005f2f60();
  *(undefined4 *)(param_1 + 700) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  pvVar3 = _malloc(800);
  *(void **)(param_1 + 0x2c4) = pvVar3;
  FUN_005f4bf0();
  FUN_005f4e50();
  FUN_005f4ad0();
  FUN_005ef640();
  FUN_005eef00(0xc);
  uVar1 = FUN_00460bf0("IconMarker");
  FUN_00727240(&LAB_005ebe70,uVar1);
  if (*(char *)(param_1 + 0x118) != '\0') {
    FUN_005ede20();
  }
  return;
}

