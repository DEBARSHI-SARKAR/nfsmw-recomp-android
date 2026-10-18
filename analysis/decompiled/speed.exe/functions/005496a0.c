/* speed.exe 005496a0 FUN_005496a0; analysis pseudocode, not buildable source.
 * calls 00520260 FUN_00520260
 * calls 00525940 FUN_00525940
 * calls 0056e360 FUN_0056e360
 * calls 00460ca0 FUN_00460ca0
 * calls 00652ad0 _malloc
 * calls 0056e320 FUN_0056e320
 */

undefined4 * __thiscall
FUN_005496a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008701fe;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x54;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089e7ac;
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *puVar1 = puVar1;
  param_1[0x55] = puVar1;
  param_1[0x58] = param_4;
  param_1[0x57] = param_3;
  puVar3 = PTR_s_UI_OLISPConnect_fng_008f3254;
  local_4 = 0;
  iVar4 = FUN_00520260(PTR_s_UI_OLISPConnect_fng_008f3254);
  if (iVar4 == 0) {
    piVar5 = _malloc(0x14);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = (int)puVar3;
      piVar5[3] = (int)FUN_00512710;
      piVar5[4] = (int)&LAB_005128b0;
    }
    puVar2 = (undefined4 *)param_1[0x55];
    *puVar2 = piVar5;
    param_1[0x55] = piVar5;
    piVar5[1] = (int)puVar2;
    *piVar5 = (int)puVar1;
  }
  puVar3 = PTR_s_OLEALogin_fng_008f325c;
  iVar4 = FUN_00520260(PTR_s_OLEALogin_fng_008f325c);
  if (iVar4 == 0) {
    piVar5 = _malloc(0x14);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = (int)puVar3;
      piVar5[3] = (int)&LAB_00512800;
      piVar5[4] = (int)&LAB_00512960;
    }
    puVar2 = (undefined4 *)param_1[0x55];
    *puVar2 = piVar5;
    param_1[0x55] = piVar5;
    piVar5[1] = (int)puVar2;
    *piVar5 = (int)puVar1;
  }
  puVar3 = PTR_s_UI_OL_WebOffer2_fng_008f3260;
  iVar4 = FUN_00520260(PTR_s_UI_OL_WebOffer2_fng_008f3260);
  if (iVar4 == 0) {
    piVar5 = _malloc(0x14);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = (int)puVar3;
      piVar5[3] = (int)&LAB_00512820;
      piVar5[4] = (int)&LAB_00512970;
    }
    puVar2 = (undefined4 *)param_1[0x55];
    *puVar2 = piVar5;
    param_1[0x55] = piVar5;
    piVar5[1] = (int)puVar2;
    *piVar5 = (int)puVar1;
  }
  puVar3 = PTR_s_OL_SelectPersona_fng_008f3264;
  iVar4 = FUN_00520260(PTR_s_OL_SelectPersona_fng_008f3264);
  if (iVar4 == 0) {
    piVar5 = _malloc(0x14);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = (int)puVar3;
      piVar5[3] = (int)&LAB_00512840;
      piVar5[4] = (int)&LAB_00512980;
    }
    puVar2 = (undefined4 *)param_1[0x55];
    *puVar2 = piVar5;
    param_1[0x55] = piVar5;
    piVar5[1] = (int)puVar2;
    *piVar5 = (int)puVar1;
  }
  puVar3 = PTR_s_OL_Create_Account_fng_008f3268;
  iVar4 = FUN_00520260(PTR_s_OL_Create_Account_fng_008f3268);
  if (iVar4 == 0) {
    piVar5 = _malloc(0x14);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = (int)puVar3;
      piVar5[3] = (int)&LAB_00512850;
      piVar5[4] = (int)&LAB_00512990;
    }
    puVar2 = (undefined4 *)param_1[0x55];
    *puVar2 = piVar5;
    param_1[0x55] = piVar5;
    piVar5[1] = (int)puVar2;
    *piVar5 = (int)puVar1;
  }
  puVar3 = PTR_s_UI_OLX_Info_Sharing_fng_008f326c;
  iVar4 = FUN_00520260(PTR_s_UI_OLX_Info_Sharing_fng_008f326c);
  if (iVar4 == 0) {
    piVar5 = _malloc(0x14);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = (int)puVar3;
      piVar5[3] = (int)&LAB_00512870;
      piVar5[4] = (int)&LAB_005129a0;
    }
    puVar2 = (undefined4 *)param_1[0x55];
    *puVar2 = piVar5;
    param_1[0x55] = piVar5;
    piVar5[1] = (int)puVar2;
    *piVar5 = (int)puVar1;
  }
  puVar3 = PTR_s_OL_UseExisting_fng_008f327c;
  iVar4 = FUN_00520260(PTR_s_OL_UseExisting_fng_008f327c);
  if (iVar4 == 0) {
    piVar5 = _malloc(0x14);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = (int)puVar3;
      piVar5[3] = (int)&LAB_00512890;
      piVar5[4] = (int)&LAB_005129c0;
    }
    puVar2 = (undefined4 *)param_1[0x55];
    *puVar2 = piVar5;
    param_1[0x55] = piVar5;
    piVar5[1] = (int)puVar2;
    *piVar5 = (int)puVar1;
  }
  puVar3 = PTR_s_OL_PC_REGISTRATION_fng_008f3274;
  iVar4 = FUN_00520260(PTR_s_OL_PC_REGISTRATION_fng_008f3274);
  if (iVar4 == 0) {
    piVar5 = _malloc(0x14);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = (int)puVar3;
      piVar5[3] = (int)&LAB_00512880;
      piVar5[4] = (int)&LAB_005129b0;
    }
    puVar2 = (undefined4 *)param_1[0x55];
    *puVar2 = piVar5;
    param_1[0x55] = piVar5;
    piVar5[1] = (int)puVar2;
    *piVar5 = (int)puVar1;
  }
  iVar4 = FUN_00520260(PTR_s_UI_OLISPConnect_fng_008f3254);
  param_1[0x56] = iVar4;
  FUN_00525940(*(undefined4 *)(iVar4 + 8),0,0,0);
  uVar6 = FUN_0056e320(0x10);
  FUN_00460ca0((int)param_1 + 0x13,uVar6);
  uVar6 = FUN_0056e360(0x10);
  FUN_00460ca0((int)param_1 + 0x27,uVar6);
  ExceptionList = local_c;
  return param_1;
}

