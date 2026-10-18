/* speed.exe 004ca4b0 FUN_004ca4b0; analysis pseudocode, not buildable source.
 * calls 004bb220 FUN_004bb220
 * calls 004c7f30 FUN_004c7f30
 * calls 004b3030 FUN_004b3030
 * calls 007c94b0 __chkstk
 * calls 004b2ed0 FUN_004b2ed0
 * calls 004b2ba0 FUN_004b2ba0
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_004ca4b0(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 local_4000 [16380];
  undefined4 uStack_4;
  
  uStack_4 = 0x4ca4ba;
  piVar5 = (int *)FUN_004b2ba0(2,1,1,local_4000,0x4000);
  bVar1 = false;
  uVar7 = 0;
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  FUN_004b2ed0(piVar5,param_1,param_2,0x6c454353);
  do {
    puVar6 = (uint *)FUN_004b3030(piVar5);
    if (puVar6 != (uint *)0x0) {
      uVar7 = *puVar6;
      if (uVar7 < 0x6c454354) {
        if (uVar7 == 0x6c454353) {
          bVar4 = true;
        }
        else if (uVar7 == 0x6c434353) {
          bVar2 = true;
        }
        else if (uVar7 == 0x6c444353) {
          bVar3 = true;
        }
      }
      else if (uVar7 == 0x6c484353) {
        bVar1 = true;
      }
      FUN_004bb220(piVar5,puVar6);
    }
  } while ((((piVar5 == (int *)0x0) || (*(int *)*piVar5 != 0x4d525453)) ||
           (((int *)*piVar5)[0x11] != 0)) || (piVar5[2] != 0));
  FUN_004c7f30(piVar5);
  if (((bVar1) && (bVar2)) && ((bVar3 && ((bVar4 && (uVar7 == 0x6c454353)))))) {
    return 1;
  }
  return 0;
}

