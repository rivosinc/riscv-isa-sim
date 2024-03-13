if (RS1 == RS2) {
  if (p->is_ctr_enabled()) {
    p->ctr_add_entry(pc, BRANCH_TARGET, CTRDATA_TYPE_TAKEN_BRANCH);
  }
  set_pc(BRANCH_TARGET);
} else {
  if (p->is_ctr_enabled()) {
    p->ctr_add_entry(pc, npc, CTRDATA_TYPE_NONTAKEN_BRANCH);
  }
}
