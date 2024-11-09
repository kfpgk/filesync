#ifndef LIBFILESYNC_CORE_ONE_WAY_SYNCER_HPP
#define LIBFILESYNC_CORE_ONE_WAY_SYNCER_HPP

#include <libfilesync/core/FileSyncer.hpp>
#include <libfilesync/core/conflict/Resolver.hpp>
#include <libfilesync/core/sync_data/Entry.hpp>
#include <libfilesync/protocol/ProtocolClient.hpp>

namespace filesync::core {

    class OneWaySyncer : public FileSyncer {

        public:
            OneWaySyncer(
                sync_data::Entry& syncContent,
                ProtocolClient& protocolClient,
                conflict::Resolver& resolver);            

        private:
            void doUpdate(sync_data::Entry* entry = nullptr) override;
    };

}

#endif