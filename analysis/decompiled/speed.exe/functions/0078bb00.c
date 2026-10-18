/* speed.exe 0078bb00 FUN_0078bb00; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 * calls 00460c50 FUN_00460c50
 * calls 00460f20 FUN_00460f20
 * calls 00460dd0 FUN_00460dd0
 * calls 00460e30 FUN_00460e30
 */

uint FUN_0078bb00(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined **ppuVar5;
  
  ppuVar5 = &PTR_s_has_entered_the_room_00905d9c;
  do {
    iVar2 = FUN_00460dd0(param_2,*ppuVar5);
    if (iVar2 == 0) {
      return 1;
    }
    ppuVar5 = ppuVar5 + 1;
  } while ((int)ppuVar5 < 0x905dbc);
  ppuVar5 = &PTR_s_You_have_been_kicked_out_of_the_r_00905dbc;
  do {
    puVar1 = *ppuVar5;
    iVar2 = FUN_00460c50(puVar1);
    iVar3 = FUN_00460e30(param_2,puVar1,iVar2);
    if ((iVar3 == 0) && (iVar2 = FUN_00460f20(iVar2 + param_2,0x20), iVar2 == 0)) {
      return 1;
    }
    ppuVar5 = ppuVar5 + 1;
  } while ((int)ppuVar5 < 0x905dc4);
  uVar4 = 0;
  if ((param_1 != 0) && (uVar4 = FUN_00460d20(param_1,"Server"), uVar4 == 0)) {
    return 1;
  }
  return uVar4 & 0xffffff00;
}

