#pragma once
#ifndef TYPE_ID_H
#define TYPE_ID_H

#include "int_id.h"
#include "string_id.h"

class ammunition_type;
using ammotype = string_id<ammunition_type>;

struct bionic_data;
using bionic_id = string_id<bionic_data>;

class effect_type;
using efftype_id = string_id<effect_type>;

class emit;
using emit_id = string_id<emit>;

class fault;
using fault_id = string_id<fault>;

struct field_type;
using field_type_id = int_id<field_type>;
using field_type_str_id = string_id<field_type>;

struct furn_t;
using furn_id = int_id<furn_t>;
using furn_str_id = string_id<furn_t>;

class gun_mode;
using gun_mode_id = string_id<gun_mode>;

class harvest_list;
using harvest_id = string_id<harvest_list>;

class ma_buff;
using mabuff_id = string_id<ma_buff>;

class martialart;
using matype_id = string_id<martialart>;

class ma_technique;
using matec_id = string_id<ma_technique>;

class material_type;
using material_id = string_id<material_type>;

struct mission_type;
using mission_type_id = string_id<mission_type>;

struct MOD_INFORMATION;
using mod_id = string_id<MOD_INFORMATION>;

class monfaction;
using mfaction_id = int_id<monfaction>;
using mfaction_str_id = string_id<monfaction>;

struct MonsterGroup;
using mongroup_id = string_id<MonsterGroup>;

class morale_type_data;
using morale_type = string_id<morale_type_data>;

struct mtype;
using mtype_id = string_id<mtype>;

class npc_class;
using npc_class_id = string_id<npc_class>;

struct oter_t;
using oter_id = int_id<oter_t>;
using oter_str_id = string_id<oter_t>;

class recipe;
using recipe_id = string_id<recipe>;

struct requirement_data;
using requirement_id = string_id<requirement_data>;

class Skill;
using skill_id = string_id<Skill>;

struct species_type;
using species_id = string_id<species_type>;

class spell_type;
using spell_id = string_id<spell_type>;

class start_location;
using start_location_id = string_id<start_location>;

struct ter_t;
using ter_id = int_id<ter_t>;
using ter_str_id = string_id<ter_t>;

class Trait_group;
namespace trait_group
{
using Trait_group_tag = string_id<Trait_group>;
} // namespace trait_group

struct trap;
using trap_id = int_id<trap>;
using trap_str_id = string_id<trap>;

struct mutation_branch;
using trait_id = string_id<mutation_branch>;

struct quality;
using quality_id = string_id<quality>;

class VehicleGroup;
using vgroup_id = string_id<VehicleGroup>;

class vitamin;
using vitamin_id = string_id<vitamin>;

class vpart_info;
using vpart_id = string_id<vpart_info>;

struct vehicle_prototype;
using vproto_id = string_id<vehicle_prototype>;

class zone_type;
using zone_type_id = string_id<zone_type>;

#endif // TYPE_ID_H
